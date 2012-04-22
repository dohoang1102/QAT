//
//  QATMasterViewController.h
//  QAT
//
//  Created by Colin Moore on 21/04/2012.
//  Copyright (c) 2012 Home. All rights reserved.
//

#import <UIKit/UIKit.h>

@class QATDetailViewController;

@interface QATMasterViewController : UITableViewController

@property (strong, nonatomic) QATDetailViewController *detailViewController;

@end
