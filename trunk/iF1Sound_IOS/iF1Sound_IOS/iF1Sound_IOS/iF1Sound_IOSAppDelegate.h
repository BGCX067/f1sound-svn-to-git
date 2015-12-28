//
//  iF1Sound_IOSAppDelegate.h
//  iF1Sound_IOS
//
//  Created by asculx on 03/05/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//
// CIA CIAO _MODPRO
//ciao 
#import <UIKit/UIKit.h>

@interface iF1Sound_IOSAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
