//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGCuratedChangeNotifications : NSObject
{
}

+ (void)addCalendarObserver:(CDUnknownBlockType)arg1 forObjectLifetime:(id)arg2;
+ (void)addAddressBookObserver:(CDUnknownBlockType)arg1 forObjectLifetime:(id)arg2;
+ (void)_addObserver:(CDUnknownBlockType)arg1 forObjectLifetime:(id)arg2 listenerClass:(Class)arg3;
+ (id)_getListener:(Class)arg1;
+ (id)_getListenerByClassMap;
+ (void)simulateCalendarChange;
+ (void)simulateAddressBookChange;

@end

