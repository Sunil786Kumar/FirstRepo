//
//  MasterViewController.h
//  FirstRepo
//
//  Created by Sunil Kumar on 4/01/13.
//  Copyright (c) 2013 Sunil Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
