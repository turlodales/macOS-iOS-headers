//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class PHAActivityGovernor;

@protocol PHAActivityGovernorDelegate <NSObject>
- (void)governorDidRevokeForegroundAccess:(PHAActivityGovernor *)arg1;
- (void)governorDidGrantForegroundAccess:(PHAActivityGovernor *)arg1;
- (void)governorDidRevokeBackgroundAccess:(PHAActivityGovernor *)arg1;
- (void)governorDidGrantBackgroundAccess:(PHAActivityGovernor *)arg1;
@end

