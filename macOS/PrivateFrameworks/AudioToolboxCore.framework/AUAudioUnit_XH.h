//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioToolboxCore/AUAudioUnit.h>

@class AUAudioUnitBusArray_XH, AUParameterTree, NSArray, NSExtension, NSObject<OS_dispatch_queue>, NSUUID, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface AUAudioUnit_XH : AUAudioUnit
{
    NSExtension *_extension;
    struct OpaqueAudioComponentInstance *_componentInstance;
    NSUUID *_requestIdentifier;
    int _remotePID;
    BOOL _canRender;
    BOOL _canProcess;
    _Bool _removingObserverWithContext;
    _Bool _installedParamTreeObserver;
    AUAudioUnitBusArray_XH *_inputBusses;
    AUAudioUnitBusArray_XH *_outputBusses;
    struct unique_ptr<AUProcAndUserData, std::__1::default_delete<AUProcAndUserData>> _elementCountListenerToken;
    struct recursive_mutex _propListenerMutex;
    struct vector<AUAudioUnit_XH_PropListener, std::__1::allocator<AUAudioUnit_XH_PropListener>> _propListeners;
    struct IPCAURenderingClient _renderClient;
    AUParameterTree *_cachedParameterTree;
    NSObject<OS_dispatch_queue> *_viewControllerRequestQueue;
    NSArray *_userPresets;
    AUAudioUnit_XH *_strongInstance;
    NSXPCConnection *_xpcConnection;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)instantiateWithExtension:(id)arg1 componentDescription:(struct AudioComponentDescription)arg2 instance:(struct OpaqueAudioComponentInstance *)arg3 options:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id).cxx_construct;
- (void).cxx_destruct;
@property __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain) AUAudioUnit_XH *strongInstance; // @synthesize strongInstance=_strongInstance;
- (BOOL)isLoadedInProcess;
- (id)userPresets;
- (id)presetStateFor:(id)arg1 error:(id *)arg2;
- (BOOL)deleteUserPreset:(id)arg1 error:(id *)arg2;
- (BOOL)saveUserPreset:(id)arg1 error:(id *)arg2;
- (void)setCurrentPreset:(id)arg1;
- (void)setFullStateForDocument:(id)arg1;
- (void)setFullState:(id)arg1;
- (void)invalidateAllParameters;
- (BOOL)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id *)arg4;
- (BOOL)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id *)arg4;
- (id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2;
- (BOOL)providesUserInterface;
- (void)selectViewConfiguration:(id)arg1;
- (id)supportedViewConfigurations:(id)arg1;
- (void)requestViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)parametersForOverviewWithCount:(long long)arg1;
- (id)parameterTree;
- (void)propertiesChanged:(id)arg1;
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id *)arg3;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)_refreshBusses:(unsigned int)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)_getValueForKey:(id)arg1;
- (id)_getValueForProperty:(id)arg1;
- (CDUnknownBlockType)internalRenderBlock;
- (void)reset;
- (void)deallocateRenderResources;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)arg1;
- (BOOL)_setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 error:(id *)arg3;
- (id)outputBusses;
- (id)inputBusses;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)internalInitWithExtension:(id)arg1 componentDescription:(struct AudioComponentDescription)arg2 instance:(struct OpaqueAudioComponentInstance *)arg3 completion:(CDUnknownBlockType)arg4;
- (void)didCrash;
- (void)doOpen:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeParameterTreeObserver;
- (void)addParameterTreeObserver;

@end

