//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, XCTestExpectation;

@interface CLIntersiloServiceMockPayload : NSObject
{
    BOOL _inUse;
    XCTestExpectation *_expectation;
    NSDictionary *_inputDictionary;
    NSDictionary *_outputDictionary;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL inUse; // @synthesize inUse=_inUse;
@property(readonly, nonatomic) NSDictionary *outputDictionary; // @synthesize outputDictionary=_outputDictionary;
@property(readonly, nonatomic) NSDictionary *inputDictionary; // @synthesize inputDictionary=_inputDictionary;
@property(readonly, nonatomic) XCTestExpectation *expectation; // @synthesize expectation=_expectation;
- (void)setOutput:(id)arg1 forKey:(id)arg2;
- (id)initWithExpectation:(id)arg1 inputDictionary:(id)arg2;

@end

