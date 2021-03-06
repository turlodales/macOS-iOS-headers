//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@class NSString;
@protocol CNReaderWriterScheduler, CNScheduler;

@protocol CNSchedulerProvider <NSObject>
@property(readonly, nonatomic) id <CNScheduler> immediateScheduler;
@property(readonly, nonatomic) id <CNScheduler> inlineScheduler;
@property(readonly, nonatomic) id <CNScheduler> mainThreadScheduler;
@property(readonly, nonatomic) id <CNScheduler> backgroundScheduler;
- (id <CNReaderWriterScheduler>)newReaderWriterSchedulerWithName:(NSString *)arg1;
- (id <CNScheduler>)newSynchronousSerialSchedulerWithName:(NSString *)arg1;
- (id <CNScheduler>)newSerialSchedulerWithName:(NSString *)arg1;
- (id <CNScheduler>)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
@end

