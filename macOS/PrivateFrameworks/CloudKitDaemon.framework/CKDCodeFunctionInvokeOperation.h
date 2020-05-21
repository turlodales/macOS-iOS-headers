//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDProtocolTranslator, NSArray, NSData, NSString, NSURL, PCCKey;

__attribute__((visibility("hidden")))
@interface CKDCodeFunctionInvokeOperation : CKDDatabaseOperation
{
    BOOL _local;
    BOOL _shouldFetchAssetContentInMemory;
    CDUnknownBlockType _replaceLocalSerializationsBlobs;
    CDUnknownBlockType _initialResponseReceivedCallback;
    CDUnknownBlockType _replaceWireSerializations;
    CDUnknownBlockType _recordFetchCompletionBlock;
    CDUnknownBlockType _recordFetchProgressBlock;
    CDUnknownBlockType _recordFetchCommandBlock;
    NSString *_serviceName;
    NSString *_functionName;
    PCCKey *_pccKey;
    NSArray *_pccWrappedKeys;
    NSData *_attestationEntropy;
    NSArray *_requestLocalSerializations;
    NSArray *_requestLocalEnvelopes;
    NSData *_permittedRemoteMeasurement;
    NSURL *_explicitBaseURL;
    NSArray *_requestRecords;
    NSArray *_requestEnvelopes;
    NSData *_serializedArguments;
    NSData *_serializedResponse;
    NSArray *_responseRecords;
    CKDProtocolTranslator *_translator;
}

+ (long long)isPredominatelyDownload;
- (void).cxx_destruct;
@property(retain, nonatomic) CKDProtocolTranslator *translator; // @synthesize translator=_translator;
@property(copy, nonatomic) NSArray *responseRecords; // @synthesize responseRecords=_responseRecords;
@property(copy, nonatomic) NSData *serializedResponse; // @synthesize serializedResponse=_serializedResponse;
@property(copy, nonatomic) NSData *serializedArguments; // @synthesize serializedArguments=_serializedArguments;
@property(copy, nonatomic) NSArray *requestEnvelopes; // @synthesize requestEnvelopes=_requestEnvelopes;
@property(copy, nonatomic) NSArray *requestRecords; // @synthesize requestRecords=_requestRecords;
@property(nonatomic) BOOL shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property(nonatomic) BOOL local; // @synthesize local=_local;
@property(copy, nonatomic) NSURL *explicitBaseURL; // @synthesize explicitBaseURL=_explicitBaseURL;
@property(copy, nonatomic) NSData *permittedRemoteMeasurement; // @synthesize permittedRemoteMeasurement=_permittedRemoteMeasurement;
@property(copy, nonatomic) NSArray *requestLocalEnvelopes; // @synthesize requestLocalEnvelopes=_requestLocalEnvelopes;
@property(copy, nonatomic) NSArray *requestLocalSerializations; // @synthesize requestLocalSerializations=_requestLocalSerializations;
@property(retain, nonatomic) NSData *attestationEntropy; // @synthesize attestationEntropy=_attestationEntropy;
@property(retain, nonatomic) NSArray *pccWrappedKeys; // @synthesize pccWrappedKeys=_pccWrappedKeys;
@property(retain, nonatomic) PCCKey *pccKey; // @synthesize pccKey=_pccKey;
@property(readonly, copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) CDUnknownBlockType recordFetchCommandBlock; // @synthesize recordFetchCommandBlock=_recordFetchCommandBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchProgressBlock; // @synthesize recordFetchProgressBlock=_recordFetchProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchCompletionBlock; // @synthesize recordFetchCompletionBlock=_recordFetchCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType replaceWireSerializations; // @synthesize replaceWireSerializations=_replaceWireSerializations;
@property(copy, nonatomic) CDUnknownBlockType initialResponseReceivedCallback; // @synthesize initialResponseReceivedCallback=_initialResponseReceivedCallback;
@property(copy, nonatomic) CDUnknownBlockType replaceLocalSerializationsBlobs; // @synthesize replaceLocalSerializationsBlobs=_replaceLocalSerializationsBlobs;
- (void)main;
- (void)_postflightRecords;
- (void)_getDeserializedRecords;
- (void)_invokeLocalFunction;
- (void)_invokeFunction;
- (void)_getSerializedRequest;
- (void)_preflightRecords;
- (id)nameForState:(unsigned long long)arg1;
- (BOOL)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

