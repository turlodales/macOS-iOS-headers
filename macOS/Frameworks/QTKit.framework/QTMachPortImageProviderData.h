//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition, QTRemoteCVImageBufferUnarchiver;

__attribute__((visibility("hidden")))
@interface QTMachPortImageProviderData : NSObject
{
    unsigned int port;
    id <QTImageConsumer> imageConsumer;
    unsigned int imageSenderPort;
    unsigned long long imageSenderContext;
    unsigned int replyMachPort;
    unsigned int imageReceiverPort;
    struct __CFRunLoop *workRunLoop;
    NSCondition *workRunLoopAvailableCondition;
    struct __CFRunLoopSource *stopRunLoopSource;
    BOOL done;
    QTRemoteCVImageBufferUnarchiver *imageBufferUnarchiver;
}

@end

