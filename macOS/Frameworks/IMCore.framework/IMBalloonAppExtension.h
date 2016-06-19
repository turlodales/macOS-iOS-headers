//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMCore/IMBalloonPlugin.h>

@class LSPlugInKitProxy, NSExtension, NSUUID;

@interface IMBalloonAppExtension : IMBalloonPlugin
{
    NSExtension *_extension;
    LSPlugInKitProxy *_proxy;
    NSUUID *_requestIdentifier;
}

@property NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) LSPlugInKitProxy *proxy; // @synthesize proxy=_proxy;
@property(readonly, retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (id)proxyWithErrorHandle:(CDUnknownBlockType)arg1;
- (id)extensionConnection;
- (BOOL)isBetaPlugin;
- (id)version;
- (id)initWithPluginBundle:(id)arg1 extension:(id)arg2;

@end

