//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSError, NSURL;

__attribute__((visibility("hidden")))
@interface VSFileRemoveOperation : VSAsyncOperation
{
    NSURL *_fileURL;
    NSError *_error;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)executionDidBegin;

@end

