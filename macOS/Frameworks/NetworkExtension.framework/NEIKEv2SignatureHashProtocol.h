//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface NEIKEv2SignatureHashProtocol : NSObject <NSCopying>
{
    unsigned long long _hashType;
}

@property(nonatomic) unsigned long long hashType; // @synthesize hashType=_hashType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithHashType:(unsigned long long)arg1;

@end

