//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (DRBurnStatusExtensions)
+ (id)stringForBurnStatus:(id)arg1;
+ (id)stringForEraseStatus:(id)arg1;
+ (id)_DRStatusStateVerifying:(id)arg1 table:(id)arg2;
+ (id)_DRStatusStateFinishing:(id)arg1 table:(id)arg2;
+ (id)_DRStatusStateSessionClose:(id)arg1 table:(id)arg2;
+ (id)_DRStatusStateTrackClose:(id)arg1 table:(id)arg2;
+ (id)_DRStatusStateTrackWrite:(id)arg1 table:(id)arg2;
+ (id)_DRStatusStateTrackOpen:(id)arg1 table:(id)arg2;
+ (id)_DRStatusStateSessionOpen:(id)arg1 table:(id)arg2;
+ (id)_DRStatusStateErasing:(id)arg1 table:(id)arg2;
+ (id)_DRStatusStateFailed:(id)arg1 table:(id)arg2;
+ (id)_DRStatusStateDone:(id)arg1 table:(id)arg2;
+ (id)_DRStatusStatePreparing:(id)arg1 table:(id)arg2;
@end

