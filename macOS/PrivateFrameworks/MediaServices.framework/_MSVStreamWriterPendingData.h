//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _MSVStreamWriterPendingData : NSObject
{
    NSData *_data;
    CDUnknownBlockType _completionHandler;
    long long _bytesWritten;
}

- (void).cxx_destruct;
@property(nonatomic) long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;

@end

