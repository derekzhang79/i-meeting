//
//  MyMeetingViewController.h
//  i-meeting
//
//  Created by Manan on 11/6/12.
//  Copyright (c) 2012 ThoughtWorks Technologies (India) Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CalendarViewController.h"

@interface MyMeetingViewController : CalendarViewController

@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end
