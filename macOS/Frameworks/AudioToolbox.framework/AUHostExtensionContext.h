//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionContext.h"

#import "AUAudioUnitHostProtocol.h"

@class AUAudioUnit_XH, NSExtension, NSUUID;

@interface AUHostExtensionContext : NSExtensionContext <AUAudioUnitHostProtocol>
{
    NSExtension *_extension;
    NSUUID *_requestIdentifier;
    AUAudioUnit_XH *_audioUnit;
    id <AUAudioUnitXPCProtocol> _remote;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(nonatomic) id <AUAudioUnitXPCProtocol> remote; // @synthesize remote=_remote;
@property(nonatomic) AUAudioUnit_XH *audioUnit; // @synthesize audioUnit=_audioUnit;
@property(retain, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void)recordParameterEvents:(id)arg1;
- (void)parameterChanged:(unsigned long long)arg1 value:(float)arg2;
- (void)propertiesChanged:(id)arg1;
- (void)dealloc;

@end

