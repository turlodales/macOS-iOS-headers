//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KHFramePanZoomInfoStoreController : NSObject
{
}

+ (void)_getPanAndZoomFromAttributeString:(id)arg1 photoID:(id *)arg2 zoom:(double *)arg3 pan:(CDStruct_e9d111b7 *)arg4;
+ (BOOL)retrievePanAndZoomInfoForFrame:(id)arg1 photoID:(id)arg2 zoom:(double *)arg3 pan:(CDStruct_e9d111b7 *)arg4;
+ (id)_currentPhotoInfoPanZoomInfoStringForFrame:(id)arg1;
+ (void)_removeExistingPanZoomInfoForFrame:(id)arg1 inInfo:(id)arg2;
+ (void)storeCurrentPhotoInfoForFrame:(id)arg1;

@end

