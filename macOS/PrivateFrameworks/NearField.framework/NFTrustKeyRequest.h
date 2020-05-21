//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NearField/NFTrustObject.h>

@class NSArray, NSData, NSNumber;

@interface NFTrustKeyRequest : NFTrustObject
{
    NSData *_subjectIdentifier;
    NSData *_discretionaryData;
    NSArray *_localValidations;
    NSNumber *_counterLimit;
}

+ (id)keyRequestWithSubjectIdentifier:(id)arg1 discretionaryData:(id)arg2 localValidations:(id)arg3 counterLimit:(id)arg4;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *counterLimit; // @synthesize counterLimit=_counterLimit;
@property(retain, nonatomic) NSArray *localValidations; // @synthesize localValidations=_localValidations;
@property(retain, nonatomic) NSData *discretionaryData; // @synthesize discretionaryData=_discretionaryData;
@property(retain, nonatomic) NSData *subjectIdentifier; // @synthesize subjectIdentifier=_subjectIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

