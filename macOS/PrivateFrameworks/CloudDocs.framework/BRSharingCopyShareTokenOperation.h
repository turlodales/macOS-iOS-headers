//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingCopyShareTokenOperation : BROperation
{
    NSURL *_fileURL;
    CDUnknownBlockType _shareTokenCompletionBlock;
    CDUnknownBlockType _shareAndBaseTokenCompletionBlock;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType shareAndBaseTokenCompletionBlock; // @synthesize shareAndBaseTokenCompletionBlock=_shareAndBaseTokenCompletionBlock;
@property(copy) CDUnknownBlockType shareTokenCompletionBlock; // @synthesize shareTokenCompletionBlock=_shareTokenCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithURL:(id)arg1;

@end

