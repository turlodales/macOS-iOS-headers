//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/FPArchiveServiceProtocol-Protocol.h>
#import <FileProvider/FPArchiveServiceStreamingInternal-Protocol.h>

@protocol FPArchiveServiceUnarchivingDelegate;

@interface FPArchiveService : NSObject <FPArchiveServiceStreamingInternal, FPArchiveServiceProtocol>
{
    id <FPArchiveServiceUnarchivingDelegate> _unarchivingDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FPArchiveServiceUnarchivingDelegate> unarchivingDelegate; // @synthesize unarchivingDelegate=_unarchivingDelegate;
- (void)receiveArchivedItemsDescriptors:(id)arg1;
- (id)unarchiveItemAtURL:(id)arg1 passphrases:(id)arg2 destinationFolderURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)unarchiveItemAtURL:(id)arg1 passphrase:(id)arg2 destinationFolderURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)unarchiveItemAtURL:(id)arg1 passphrase:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)itemDescriptorsForItemAtURL:(id)arg1 passphrases:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)itemDescriptorsForItemAtURL:(id)arg1 passphrase:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)archiveItemsWithURLs:(id)arg1 compressionFormat:(unsigned long long)arg2 destinationFolderURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)archiveItemsWithURLs:(id)arg1 compressionFormat:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

