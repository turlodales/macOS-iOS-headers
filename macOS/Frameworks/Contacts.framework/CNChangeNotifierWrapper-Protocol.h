//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@class NSString;
@protocol CNChangeNotificationReceiver;

@protocol CNChangeNotifierWrapper <NSObject>
- (void)postNotification:(NSString *)arg1;
- (void)removeObserver:(id <CNChangeNotificationReceiver>)arg1 notification:(NSString *)arg2;
- (void)addObserver:(id <CNChangeNotificationReceiver>)arg1 notification:(NSString *)arg2;
@end

