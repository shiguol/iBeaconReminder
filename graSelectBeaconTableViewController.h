//
//  graSelectBeaconTableViewController.h
//  beaconReminderDemo
//
//  Created by li lin on 3/25/14.
//  Copyright (c) 2014 li lin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "iBeaconUser.h"
@interface graSelectBeaconTableViewController : UITableViewController
@property (nonatomic, strong) void (^beaconSelected)(CLBeacon *);
@property (nonatomic, strong) CLBeacon *seletedBeacon;
@end
