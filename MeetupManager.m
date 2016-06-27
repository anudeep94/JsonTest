//
//  MeetupManager.m
//  BrowseMeetup
//
//  Created by vm mac on 25/06/2016.
//  Copyright © 2016 TAMIM Ziad. All rights reserved.
//

#import "MeetupManager.h"
#import "GroupBuilder.h"



@implementation MeetupManager
-(void)fetchGroupsAtCoordinate:(CLLocationCoordinate2D)coordinate
{
    [self.communicator searchGroupsAtCoordinate :coordinate];
}
#pragma mark - MaeetupCommunicatorDelegate

-(void)receivedGroupsJSON:(NSData *)objectNotation
{
    NSError *error=nil;
    NSArray *groups=[GroupBuilder groupFromJSON:objectNotation error:&error];
    
    if(error !=nil)
    {
        [self.delegate fetchingGroupsFailedWithError:error];
    }else{
        
        [self.delegate didReceiveGroups:groups];
    }
}

-(void) fetchingGroupsFailedWithError:(NSError *)error
{
    [self.delegate fetchingGroupsFailedWithError:error];
}
@end