//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSUserDefaults;

@interface AXMSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_defaults;
    NSMutableDictionary *_queue_settingObservers;
}

+ (id)settings;
- (void).cxx_destruct;
@property(nonatomic) BOOL writeOutScreenCaptures; // @dynamic writeOutScreenCaptures;
@property(nonatomic) BOOL writeOutOCRInputImages; // @dynamic writeOutOCRInputImages;
@property(nonatomic) BOOL writeOutInputImages; // @dynamic writeOutInputImages;
- (void)removeObserverForAllSettings:(id)arg1;
- (void)_queue_removeObserver:(id)arg1 forSetting:(id)arg2;
- (void)removeObserver:(id)arg1 forSetting:(id)arg2;
- (void)addObserver:(id)arg1 forSeetting:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_init;

@end

