//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMHomeManagerDelegatePrivate.h"

@class HMHomeManager, NSMutableDictionary, NSString;

@interface _TVRCMatchPointDeviceQuery : NSObject <HMHomeManagerDelegatePrivate>
{
    id <_TVRCMatchPointDeviceQueryDelegate> _delegate;
    HMHomeManager *_homeManager;
    NSMutableDictionary *_wrapperToIdentifierMapping;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *wrapperToIdentifierMapping; // @synthesize wrapperToIdentifierMapping=_wrapperToIdentifierMapping;
@property(retain, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(nonatomic) __weak id <_TVRCMatchPointDeviceQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyRemovedService:(id)arg1;
- (void)_notifyAddedService:(id)arg1;
- (void)_matchPointServiceNameChanged:(id)arg1;
- (void)_matchPointServiceRemoved:(id)arg1;
- (void)_matchPointServiceAdded:(id)arg1;
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

