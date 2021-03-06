/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFHomeScreenController : NSObject <WFDatabaseObjectObserver> {
    WFDatabase * _database;
    NSMutableSet * _homeScreenShortcutIDs;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) WFDatabase *database;
@property (nonatomic, readonly) NSMutableSet *homeScreenShortcutIDs;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (void)drawIcon:(id)arg1 maxSize:(double)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)iconImageForIcon:(id)arg1;
+ (id)launchImageForIcon:(id)arg1 inLandscape:(bool)arg2;
+ (void)migrateOpenAppWebClipsIfNeededWithDatabaseAccessor:(id /* block */)arg1;
+ (void)migratePreYukonWebClipsIfNeeded;
+ (void)migrateWebClipsIfNeededWithDatabaseAccessor:(id /* block */)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)addWorkflowToHomeScreen:(id)arg1 withName:(id)arg2 icon:(id)arg3 error:(id*)arg4;
- (id)database;
- (void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (id)homeScreenShortcutIDs;
- (id)init;
- (id)queue;
- (void)startListeningForDatabaseChanges;
- (void)updateWebClipIfNeeded:(id)arg1;

@end
