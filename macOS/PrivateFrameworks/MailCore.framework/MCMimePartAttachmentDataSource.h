//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCAttachmentDataSource.h"

@class MCMimePart, NSString;

@interface MCMimePartAttachmentDataSource : NSObject <MCAttachmentDataSource>
{
    MCMimePart *_mimePart;
    unsigned long long _approximateSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long approximateSize; // @synthesize approximateSize=_approximateSize;
@property(readonly, nonatomic) MCMimePart *mimePart; // @synthesize mimePart=_mimePart;
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL canResultsBeCached;
@property(readonly, nonatomic) BOOL dataIsLocallyAvailable;
- (unsigned long long)approximateSizeForAccessLevel:(long long)arg1;
- (void)fileWrapperForAccessLevel:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dataForAccessLevel:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithMimePart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

