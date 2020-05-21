//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _MFRedundantTextIdentifierAttachmentContext : NSObject
{
    BOOL _attachmentIsDownloaded;
    BOOL _attachmentIsAutoArchived;
    NSString *_attachmentName;
    NSString *_attachmentExtension;
    unsigned long long _attachmentSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL attachmentIsAutoArchived; // @synthesize attachmentIsAutoArchived=_attachmentIsAutoArchived;
@property(readonly, nonatomic) BOOL attachmentIsDownloaded; // @synthesize attachmentIsDownloaded=_attachmentIsDownloaded;
@property(readonly, nonatomic) unsigned long long attachmentSize; // @synthesize attachmentSize=_attachmentSize;
@property(readonly, copy, nonatomic) NSString *attachmentExtension; // @synthesize attachmentExtension=_attachmentExtension;
@property(readonly, copy, nonatomic) NSString *attachmentName; // @synthesize attachmentName=_attachmentName;
- (BOOL)isEqualTo:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithAttachmentName:(id)arg1 attachmentSize:(unsigned long long)arg2 attachmentIsDownloaded:(BOOL)arg3 attachmentIsAutoArchived:(BOOL)arg4;

@end

