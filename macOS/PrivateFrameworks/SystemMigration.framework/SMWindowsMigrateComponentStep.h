//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMMigrationEngineStep.h>

@class SMCopyEngine, SMWindowsMacPathMapper;

@interface SMWindowsMigrateComponentStep : SMMigrationEngineStep
{
    SMWindowsMacPathMapper *windowsMacPathMap;
    SMCopyEngine *fileCopyEngine;
}

- (void).cxx_destruct;
@property(retain) SMCopyEngine *fileCopyEngine; // @synthesize fileCopyEngine;
@property(retain) SMWindowsMacPathMapper *windowsMacPathMap; // @synthesize windowsMacPathMap;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)estimatedTimeRemainingChanged:(double)arg1;
- (void)transferRateChanged:(double)arg1;
- (void)copierFailed:(id)arg1 error:(id)arg2;
- (double)estimatedTimeRemainingForPhase:(unsigned long long)arg1;
- (double)estimatedTimeToCompletePhase:(unsigned long long)arg1;
- (void)cancel;
- (id)process;
- (id)prepare;
- (id)initWithEngine:(id)arg1 pathMap:(id)arg2;

@end

