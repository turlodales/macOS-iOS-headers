//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareSaveOperation : BROperation
{
    CKShare *_share;
    CDUnknownBlockType _shareSaveCompletionBlock;
}

+ (BOOL)shouldRetryShareSaveOnError:(id)arg1;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType shareSaveCompletionBlock; // @synthesize shareSaveCompletionBlock=_shareSaveCompletionBlock;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithShare:(id)arg1;

@end

