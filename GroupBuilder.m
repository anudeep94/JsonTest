//
//  GroupBuilder.m
//  BrowseMeetup
//
//  Created by vm mac on 25/06/2016.
//  Copyright © 2016 TAMIM Ziad. All rights reserved.
//

#import "GroupBuilder.h"
#import "Group.h"

@implementation GroupBuilder


+(NSArray *)groupFromJSON:(NSData *)objectNotation error:(NSError **) error
{
    NSError *localError = nil;
    NSDictionary *parsedObject = [NSJSONSerialization JSONObjectWithData:objectNotation options:0 error:&localError];
    
    if (localError != nil) {
        *error = localError;
        return nil;
    }
    
    NSMutableArray *groups = [[NSMutableArray alloc] init];
    
    NSArray *results = [parsedObject valueForKey:@"results"];
    NSLog(@"Count %lu", (unsigned long)results.count);
    
    for (NSDictionary *groupDic in results) {
        Group *group = [[Group alloc] init];
        
        for (NSString *key in groupDic) {
            if ([group respondsToSelector:NSSelectorFromString(key)]) {
                [group setValue:[groupDic valueForKey:key] forKey:key];
            }
        }
        
        [groups addObject:group];
    }
    
    return groups;
}
@end