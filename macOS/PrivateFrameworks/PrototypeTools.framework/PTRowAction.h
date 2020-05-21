//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface PTRowAction : NSObject <NSSecureCoding>
{
    CDUnknownBlockType _handler;
    BOOL _isEncodable;
}

+ (BOOL)supportsSecureCoding;
+ (id)actionWithHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL isEncodable; // @synthesize isEncodable=_isEncodable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (CDUnknownBlockType)defaultHandler;
- (BOOL)deselectsRowOnSuccess;
@property(readonly, nonatomic) CDUnknownBlockType handler;

@end

