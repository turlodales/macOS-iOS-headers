//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@class CRImageReaderOutput, NSString;

@interface VNRecognizedText : NSObject <NSCopying, NSSecureCoding>
{
    CRImageReaderOutput *_crOutput;
    unsigned long long _requestRevision;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long requestRevision; // @synthesize requestRevision=_requestRevision;
@property(readonly, copy) CRImageReaderOutput *crOutput; // @synthesize crOutput=_crOutput;
- (id)debugDescription;
- (id)boundingBoxForRange:(struct _NSRange)arg1 error:(id *)arg2;
@property(readonly, nonatomic) float confidence;
@property(readonly, copy, nonatomic) NSString *string;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 CRImageReaderOutput:(id)arg2;

@end

