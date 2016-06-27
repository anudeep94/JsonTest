//
//  MeetupManager.h
//  BrowseMeetup
//
//  Created by vm mac on 25/06/2016.
//  Copyright © 2016 TAMIM Ziad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import "MeetupManagerDelegate.h"
#import "MeetupCommunicatorDelegate.h"
#import "MeetupCommunicator.h"

@class MeetupCommunicator;

@interface MeetupManager : NSObject <MeetupCommunicatorDelegate>
@property (strong, nonatomic) MeetupCommunicator *communicator;
@property (weak, nonatomic) id<MeetupManagerDelegate>delegate;

-(void)fetchGroupsAtCoordinate:(CLLocationCoordinate2D)coordinate;


@end

