//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AEDesc {
    unsigned int _field1;
    struct OpaqueAEDataStorageType **_field2;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct OpaqueAEDataStorageType;

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __AMLibraryViewFlags {
    unsigned int viewMode:1;
    unsigned int draggingOutsideLibrary:1;
    unsigned int acceptedDraggedAssets:1;
    unsigned int isEditingNewSmartGroup:1;
    unsigned int hasShownVariables:1;
    unsigned int reserved:27;
};

struct __AMWorkflowControllerDelegateRespondTo {
    unsigned int workflowControllerDidAddWorkflow:1;
    unsigned int workflowControllerDidRemoveWorkflow:1;
    unsigned int workflowControllerWillRun:1;
    unsigned int workflowControllerWillStep:1;
    unsigned int workflowControllerWillStop:1;
    unsigned int workflowControllerWillPause:1;
    unsigned int workflowControllerDidRun:1;
    unsigned int workflowControllerDidStep:1;
    unsigned int workflowControllerDidStop:1;
    unsigned int workflowControllerDidPause:1;
    unsigned int workflowControllerWillRunAction:1;
    unsigned int workflowControllerDidRunAction:1;
    unsigned int workflowControllerDidError:1;
    unsigned int workflowControllerDidLogMessageOfTypeFromAction:1;
    unsigned int workflowControllerWillRunConversion:1;
    unsigned int workflowControllerDidRunConversion:1;
    unsigned int workflowControllerDidResumeWithAction:1;
    unsigned int reserved:19;
};

struct __AMWorkflowControllerFlags {
    unsigned int shouldRunLocally:1;
    unsigned int isRunningLocally:1;
    unsigned int shouldDisplayProgressInMenuBar:1;
    unsigned int reserved:29;
};

struct __AMWorkflowViewFlags {
    unsigned int ignoreSubviewFrameChanges:1;
    unsigned int editingEnabled:1;
    unsigned int reserved:30;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    id _field3;
} CDStruct_0f015c83;

