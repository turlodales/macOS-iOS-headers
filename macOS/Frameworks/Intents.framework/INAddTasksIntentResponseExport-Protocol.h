//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INTaskList, NSArray;

@protocol INAddTasksIntentResponseExport <NSObject, JSExport>
@property unsigned long long warnings;
@property(copy) NSArray *addedTasks;
@property(copy) INTaskList *modifiedTaskList;
@property(readonly) long long code;
@end

