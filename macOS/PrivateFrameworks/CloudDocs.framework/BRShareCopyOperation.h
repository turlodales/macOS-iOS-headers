//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRShareCopyOperation : BROperation
{
    NSURL *_url;
    CDUnknownBlockType _shareCopyCompletionBlock;
    CDUnknownBlockType _rootShareCopyCompletionBlock;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType rootShareCopyCompletionBlock; // @synthesize rootShareCopyCompletionBlock=_rootShareCopyCompletionBlock;
@property(copy) CDUnknownBlockType shareCopyCompletionBlock; // @synthesize shareCopyCompletionBlock=_shareCopyCompletionBlock;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithURL:(id)arg1;

@end

