//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailCore/MCAttachmentDataSource-Protocol.h>

@class MCFileWrapper, NSString;

@interface MCFileWrapperAttachmentDataSource : NSObject <MCAttachmentDataSource>
{
    MCFileWrapper *_fileWrapper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MCFileWrapper *fileWrapper; // @synthesize fileWrapper=_fileWrapper;
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL canResultsBeCached;
@property(readonly, nonatomic) BOOL dataIsLocallyAvailable;
- (unsigned long long)approximateSizeForAccessLevel:(long long)arg1;
- (void)fileWrapperForAccessLevel:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dataForAccessLevel:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithFileWrapper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

