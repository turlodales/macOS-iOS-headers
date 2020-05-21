//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NEIKEv2EAPProtocol, NSMutableData;

@interface NEIKEv2EAP : NSObject
{
    struct EAPClientPluginData_s _pluginData;
    NEIKEv2EAPProtocol *_protocol;
    struct EAPClientModule_s *_module;
}

+ (struct EAPClientModule_s *)loadModuleForType:(unsigned int)arg1;
+ (unsigned int)typeForPayload:(id)arg1;
+ (unsigned int)codeForPayload:(id)arg1;
+ (struct EAPClientModule_s *)getPEAPModule;
+ (struct EAPClientModule_s *)getTLSModule;
+ (struct EAPClientModule_s *)getGTCModule;
+ (struct EAPClientModule_s *)getMSCHAPv2Module;
+ (struct EAPClientModule_s *)getSIMModule;
+ (struct EAPClientModule_s *)getAKAModule;
- (void).cxx_destruct;
@property struct EAPClientModule_s *module; // @synthesize module=_module;
@property(retain) NEIKEv2EAPProtocol *protocol; // @synthesize protocol=_protocol;
@property(readonly) NSMutableData *sessionKey;
- (id)createPayloadResponseForRequest:(id)arg1 ikeSA:(id)arg2 success:(char *)arg3 reportEAPError:(char *)arg4;
- (id)init;
- (id)selectModuleForPayload:(id)arg1 ikeSA:(id)arg2;
- (id)createPayloadResponseForRequest:(id)arg1 type:(unsigned int)arg2 typeData:(id)arg3 typeString:(id)arg4;
- (id)copyProperties:(unsigned int)arg1;
- (void)dealloc;

@end

