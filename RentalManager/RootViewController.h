//
//  RootViewController.h
//  RentalManager
//
//  Created by Charles Feduke on 9/21/11.
//  Copyright 2011 Deployment Zone. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UITableViewController

typedef enum PropertyType {
    Unit,
    Townhouse,
    Mansion
} PropertyType;

typedef struct {
    NSString *address;
    PropertyType type;
    double weeklyRentalPrice;
} RentalProperty;

@end
