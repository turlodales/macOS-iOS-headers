//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface TVRMSNavigationCommandMessage : PBCodable <NSCopying>
{
    int _navigationCommand;
    int _sessionIdentifier;
    struct {
        unsigned int navigationCommand:1;
        unsigned int sessionIdentifier:1;
    } _has;
}

@property(nonatomic) int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) int navigationCommand; // @synthesize navigationCommand=_navigationCommand;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSessionIdentifier;
@property(nonatomic) BOOL hasNavigationCommand;

@end

