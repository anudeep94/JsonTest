//
//  MeetupCommunicator.h
//  BrowseMeetup
//
//  Created by vm mac on 25/06/2016.
//  Copyright © 2016 TAMIM Ziad. All rights reserved.
//

#import <Foundation/Foundation.h>


#import <CoreLocation/CoreLocation.h>

@protocol MeetupCommunicatorDelegate;

@interface MeetupCommunicator : NSObject

@property (weak, nonatomic) id<MeetupCommunicatorDelegate> delegate;

-(void)searchGroupsAtCoordinate :(CLLocationCoordinate2D)coordinate;

@end

