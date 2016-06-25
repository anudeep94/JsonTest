//
//  GroupBuilder.h
//  BrowseMeetup
//
//  Created by vm mac on 25/06/2016.
//  Copyright © 2016 TAMIM Ziad. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GroupBuilder : NSObject

+(NSArray *)groupFromJSON:(NSData *)objectNotation error:(NSError **) error;

@end
