//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput/TIMecabraCandidate.h>

@class NSString;

@interface TILiveConversionCandidate : TIMecabraCandidate
{
    NSString *_candidate;
    BOOL _inlineCandidate;
}

+ (BOOL)supportsSecureCoding;
+ (int)type;
- (void).cxx_destruct;
@property(nonatomic, getter=isInlineCandidate) BOOL inlineCandidate; // @synthesize inlineCandidate=_inlineCandidate;
- (id)candidate;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)label;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSurface:(id)arg1 input:(id)arg2 candidate:(id)arg3 mecabraCandidatePointerValue:(id)arg4;

@end

