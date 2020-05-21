//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PGGraphDataModelEnrichmentProcessor.h"

@class NSString;

@interface PGGraphSearchEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>
{
}

+ (double)backgroundJobTimeout;
+ (id)backgroundJobName;
+ (BOOL)supportsBackgroundJob;
- (void)_processGraphUpdateInventory:(id)arg1 manager:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (BOOL)_shouldProcessGraphUpdate:(id)arg1;
- (void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

