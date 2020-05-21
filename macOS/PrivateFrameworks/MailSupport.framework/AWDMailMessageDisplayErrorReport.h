//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class AWDMailMessage;

@interface AWDMailMessageDisplayErrorReport : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _loadingError;
    AWDMailMessage *_message;
    int _mimeError;
    struct {
        unsigned int timestamp:1;
        unsigned int loadingError:1;
        unsigned int mimeError:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWDMailMessage *message; // @synthesize message=_message;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasMessage;
- (int)StringAsLoadingError:(id)arg1;
- (id)loadingErrorAsString:(int)arg1;
@property(nonatomic) BOOL hasLoadingError;
@property(nonatomic) int loadingError; // @synthesize loadingError=_loadingError;
- (int)StringAsMimeError:(id)arg1;
- (id)mimeErrorAsString:(int)arg1;
@property(nonatomic) BOOL hasMimeError;
@property(nonatomic) int mimeError; // @synthesize mimeError=_mimeError;
@property(nonatomic) BOOL hasTimestamp;

@end

