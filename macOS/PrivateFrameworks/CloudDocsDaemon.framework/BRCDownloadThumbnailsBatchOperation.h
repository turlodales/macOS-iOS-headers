//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCTransferBatchOperation.h>

__attribute__((visibility("hidden")))
@interface BRCDownloadThumbnailsBatchOperation : BRCTransferBatchOperation
{
    CDUnknownBlockType _perDownloadCompletionBlock;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType perDownloadCompletionBlock; // @synthesize perDownloadCompletionBlock=_perDownloadCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)actionPrettyName;
- (id)transferredObjectsPrettyName;
- (void)mainWithTransfers:(id)arg1;
- (void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2;
- (void)addDownload:(id)arg1;
- (id)createActivity;
- (id)initWithSyncContext:(id)arg1;

@end

