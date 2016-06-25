//
//  MeetupCommunicatorDelegate.h
//  BrowseMeetup
//
//  Created by vm mac on 25/06/2016.
//  Copyright © 2016 TAMIM Ziad. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MeetupCommunicatorDelegate
- (void)receivedGroupsJSON:(NSData *)objectNotation;
- (void)fetchingGroupsFailedWithError:(NSError *)error;
@end


@interface MeetupCommunicatorDelegate : NSObject

@end
