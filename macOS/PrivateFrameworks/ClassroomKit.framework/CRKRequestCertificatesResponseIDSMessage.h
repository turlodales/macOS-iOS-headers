//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIDSMessage-Protocol.h>

@class NSArray, NSDictionary, NSError, NSUUID;

@interface CRKRequestCertificatesResponseIDSMessage : NSObject <CRKIDSMessage>
{
    NSUUID *_requestIdentifier;
    NSArray *_certificateDataCollection;
    NSError *_error;
}

+ (id)instanceWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSArray *certificateDataCollection; // @synthesize certificateDataCollection=_certificateDataCollection;
@property(readonly, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly, nonatomic) long long messageType;
- (id)initWithRequestIdentifier:(id)arg1 certificateDataCollection:(id)arg2 error:(id)arg3;

@end

