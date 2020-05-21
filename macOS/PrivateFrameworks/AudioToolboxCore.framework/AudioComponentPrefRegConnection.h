//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AudioComponentPreferenceProtocol.h"

__attribute__((visibility("hidden")))
@interface AudioComponentPrefRegConnection : NSObject <AudioComponentPreferenceProtocol>
{
    struct AudioComponentRegistrarImpl *mImpl;
    struct ConnectionInfo mConnInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)getInterAppIcon:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getExtensionIcon:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setComponentUserTags:(id)arg1 tags:(id)arg2;
- (void)getComponentUserTags:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getExtensionComponentList:(id)arg1 linkedSDKVersion:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setExtensionComponentList:(id)arg1 linkedSDKVersion:(int)arg2 components:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)initWithRegistrar:(struct AudioComponentRegistrarImpl *)arg1 connection:(id)arg2;

@end

