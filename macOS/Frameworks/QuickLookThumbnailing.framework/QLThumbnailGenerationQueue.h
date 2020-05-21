//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSOperationQueue;

@interface QLThumbnailGenerationQueue : NSObject
{
    NSOperationQueue *_queue;
    NSMutableDictionary *_queuedURLs;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *queuedURLs; // @synthesize queuedURLs=_queuedURLs;
- (void)noteThumbnailGenerationQueuedExternallyForDocumentAtURL:(id)arg1;
- (void)enqueueThumbnailGenerationIfNeededForDocumentAtURL:(id)arg1 atBackgroundPriority:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

