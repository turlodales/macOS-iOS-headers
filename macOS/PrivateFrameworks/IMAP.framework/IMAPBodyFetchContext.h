//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCBodyFetchContext.h"

@class IMAPTaskManager, NSSet, NSString;

@interface IMAPBodyFetchContext : NSObject <MCBodyFetchContext>
{
    NSSet *_messages;
    IMAPTaskManager *_taskManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IMAPTaskManager *taskManager; // @synthesize taskManager=_taskManager;
- (void)cacheBodiesForMessages:(id)arg1;
- (id)init;
- (id)initWithTaskManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

