#include "tf.h"
namespace tf {
	void TFLib::Init(const char* dllPath)
	{
		HMODULE tfLib = LoadLibraryA(dllPath);

		AbortWhile = GET_ADDRESS(tfLib, TF_AbortWhile);
		AddControlInput = GET_ADDRESS(tfLib, TF_AddControlInput);
		AddGradients = GET_ADDRESS(tfLib, TF_AddGradients);
		AddInput = GET_ADDRESS(tfLib, TF_AddInput);
		AddInputList = GET_ADDRESS(tfLib, TF_AddInputList);
		AllocateTensor = GET_ADDRESS(tfLib, TF_AllocateTensor);
		CloseDeprecatedSession = GET_ADDRESS(tfLib, TF_CloseDeprecatedSession);
		CloseSession = GET_ADDRESS(tfLib, TF_CloseSession);
		ColocateWith = GET_ADDRESS(tfLib, TF_ColocateWith);
		DataTypeSize = GET_ADDRESS(tfLib, TF_DataTypeSize);
		DeleteBuffer = GET_ADDRESS(tfLib, TF_DeleteBuffer);
		DeleteDeprecatedSession = GET_ADDRESS(tfLib, TF_DeleteDeprecatedSession);
		DeleteDeviceList = GET_ADDRESS(tfLib, TF_DeleteDeviceList);
		DeleteFunction = GET_ADDRESS(tfLib, TF_DeleteFunction);
		DeleteGraph = GET_ADDRESS(tfLib, TF_DeleteGraph);
		DeleteImportGraphDefOptions = GET_ADDRESS(tfLib, TF_DeleteImportGraphDefOptions);
		DeleteLibraryHandle = GET_ADDRESS(tfLib, TF_DeleteLibraryHandle);
		DeletePRunHandle = GET_ADDRESS(tfLib, TF_DeletePRunHandle);
		DeleteSession = GET_ADDRESS(tfLib, TF_DeleteSession);
		DeleteSessionOptions = GET_ADDRESS(tfLib, TF_DeleteSessionOptions);
		DeleteStatus = GET_ADDRESS(tfLib, TF_DeleteStatus);
		DeleteTensor = GET_ADDRESS(tfLib, TF_DeleteTensor);
		DeprecatedSessionListDevices = GET_ADDRESS(tfLib, TF_DeprecatedSessionListDevices);
		DeviceListCount = GET_ADDRESS(tfLib, TF_DeviceListCount);
		DeviceListMemoryBytes = GET_ADDRESS(tfLib, TF_DeviceListMemoryBytes);
		DeviceListName = GET_ADDRESS(tfLib, TF_DeviceListName);
		DeviceListType = GET_ADDRESS(tfLib, TF_DeviceListType);
		Dim = GET_ADDRESS(tfLib, TF_Dim);
		ExtendGraph = GET_ADDRESS(tfLib, TF_ExtendGraph);
		FinishOperation = GET_ADDRESS(tfLib, TF_FinishOperation);
		FinishWhile = GET_ADDRESS(tfLib, TF_FinishWhile);
		FunctionGetAttrValueProto = GET_ADDRESS(tfLib, TF_FunctionGetAttrValueProto);
		FunctionImportFunctionDef = GET_ADDRESS(tfLib, TF_FunctionImportFunctionDef);
		FunctionSetAttrValueProto = GET_ADDRESS(tfLib, TF_FunctionSetAttrValueProto);
		FunctionToFunctionDef = GET_ADDRESS(tfLib, TF_FunctionToFunctionDef);
		GetAllOpList = GET_ADDRESS(tfLib, TF_GetAllOpList);
		GetBuffer = GET_ADDRESS(tfLib, TF_GetBuffer);
		GetCode = GET_ADDRESS(tfLib, TF_GetCode);
		GetOpList = GET_ADDRESS(tfLib, TF_GetOpList);
		GraphCopyFunction = GET_ADDRESS(tfLib, TF_GraphCopyFunction);
		GraphGetTensorNumDims = GET_ADDRESS(tfLib, TF_GraphGetTensorNumDims);
		GraphGetTensorShape = GET_ADDRESS(tfLib, TF_GraphGetTensorShape);
		GraphImportGraphDef = GET_ADDRESS(tfLib, TF_GraphImportGraphDef);
		GraphImportGraphDefWithReturnOutputs = GET_ADDRESS(tfLib, TF_GraphImportGraphDefWithReturnOutputs);
		GraphNextOperation = GET_ADDRESS(tfLib, TF_GraphNextOperation);
		GraphOperationByName = GET_ADDRESS(tfLib, TF_GraphOperationByName);
		GraphSetTensorShape = GET_ADDRESS(tfLib, TF_GraphSetTensorShape);
		GraphToFunction = GET_ADDRESS(tfLib, TF_GraphToFunction);
		GraphToGraphDef = GET_ADDRESS(tfLib, TF_GraphToGraphDef);
		ImportGraphDefOptionsAddControlDependency = GET_ADDRESS(tfLib, TF_ImportGraphDefOptionsAddControlDependency);
		ImportGraphDefOptionsAddInputMapping = GET_ADDRESS(tfLib, TF_ImportGraphDefOptionsAddInputMapping);
		ImportGraphDefOptionsAddReturnOutput = GET_ADDRESS(tfLib, TF_ImportGraphDefOptionsAddReturnOutput);
		ImportGraphDefOptionsNumReturnOutputs = GET_ADDRESS(tfLib, TF_ImportGraphDefOptionsNumReturnOutputs);
		ImportGraphDefOptionsRemapControlDependency = GET_ADDRESS(tfLib, TF_ImportGraphDefOptionsRemapControlDependency);
		ImportGraphDefOptionsSetPrefix = GET_ADDRESS(tfLib, TF_ImportGraphDefOptionsSetPrefix);
		LoadLibrary = GET_ADDRESS(tfLib, TF_LoadLibrary);
		LoadSessionFromSavedModel = GET_ADDRESS(tfLib, TF_LoadSessionFromSavedModel);
		Message = GET_ADDRESS(tfLib, TF_Message);
		NewBuffer = GET_ADDRESS(tfLib, TF_NewBuffer);
		NewBufferFromString = GET_ADDRESS(tfLib, TF_NewBufferFromString);
		NewDeprecatedSession = GET_ADDRESS(tfLib, TF_NewDeprecatedSession);
		NewGraph = GET_ADDRESS(tfLib, TF_NewGraph);
		NewImportGraphDefOptions = GET_ADDRESS(tfLib, TF_NewImportGraphDefOptions);
		NewOperation = GET_ADDRESS(tfLib, TF_NewOperation);
		NewSession = GET_ADDRESS(tfLib, TF_NewSession);
		NewSessionOptions = GET_ADDRESS(tfLib, TF_NewSessionOptions);
		NewStatus = GET_ADDRESS(tfLib, TF_NewStatus);
		NewTensor = GET_ADDRESS(tfLib, TF_NewTensor);
		NewWhile = GET_ADDRESS(tfLib, TF_NewWhile);
		NumDims = GET_ADDRESS(tfLib, TF_NumDims);
		OperationDevice = GET_ADDRESS(tfLib, TF_OperationDevice);
		OperationGetAttrBool = GET_ADDRESS(tfLib, TF_OperationGetAttrBool);
		OperationGetAttrBoolList = GET_ADDRESS(tfLib, TF_OperationGetAttrBoolList);
		OperationGetAttrFloat = GET_ADDRESS(tfLib, TF_OperationGetAttrFloat);
		OperationGetAttrFloatList = GET_ADDRESS(tfLib, TF_OperationGetAttrFloatList);
		OperationGetAttrInt = GET_ADDRESS(tfLib, TF_OperationGetAttrInt);
		OperationGetAttrIntList = GET_ADDRESS(tfLib, TF_OperationGetAttrIntList);
		OperationGetAttrMetadata = GET_ADDRESS(tfLib, TF_OperationGetAttrMetadata);
		OperationGetAttrShape = GET_ADDRESS(tfLib, TF_OperationGetAttrShape);
		OperationGetAttrShapeList = GET_ADDRESS(tfLib, TF_OperationGetAttrShapeList);
		OperationGetAttrString = GET_ADDRESS(tfLib, TF_OperationGetAttrString);
		OperationGetAttrStringList = GET_ADDRESS(tfLib, TF_OperationGetAttrStringList);
		OperationGetAttrTensor = GET_ADDRESS(tfLib, TF_OperationGetAttrTensor);
		OperationGetAttrTensorList = GET_ADDRESS(tfLib, TF_OperationGetAttrTensorList);
		OperationGetAttrTensorShapeProto = GET_ADDRESS(tfLib, TF_OperationGetAttrTensorShapeProto);
		OperationGetAttrTensorShapeProtoList = GET_ADDRESS(tfLib, TF_OperationGetAttrTensorShapeProtoList);
		OperationGetAttrType = GET_ADDRESS(tfLib, TF_OperationGetAttrType);
		OperationGetAttrTypeList = GET_ADDRESS(tfLib, TF_OperationGetAttrTypeList);
		OperationGetAttrValueProto = GET_ADDRESS(tfLib, TF_OperationGetAttrValueProto);
		OperationGetControlInputs = GET_ADDRESS(tfLib, TF_OperationGetControlInputs);
		OperationGetControlOutputs = GET_ADDRESS(tfLib, TF_OperationGetControlOutputs);
		OperationInput = GET_ADDRESS(tfLib, TF_OperationInput);
		OperationInputListLength = GET_ADDRESS(tfLib, TF_OperationInputListLength);
		OperationInputType = GET_ADDRESS(tfLib, TF_OperationInputType);
		OperationName = GET_ADDRESS(tfLib, TF_OperationName);
		OperationNumControlInputs = GET_ADDRESS(tfLib, TF_OperationNumControlInputs);
		OperationNumControlOutputs = GET_ADDRESS(tfLib, TF_OperationNumControlOutputs);
		OperationNumInputs = GET_ADDRESS(tfLib, TF_OperationNumInputs);
		OperationNumOutputs = GET_ADDRESS(tfLib, TF_OperationNumOutputs);
		OperationOpType = GET_ADDRESS(tfLib, TF_OperationOpType);
		OperationOutputConsumers = GET_ADDRESS(tfLib, TF_OperationOutputConsumers);
		OperationOutputListLength = GET_ADDRESS(tfLib, TF_OperationOutputListLength);
		OperationOutputNumConsumers = GET_ADDRESS(tfLib, TF_OperationOutputNumConsumers);
		OperationOutputType = GET_ADDRESS(tfLib, TF_OperationOutputType);
		OperationToNodeDef = GET_ADDRESS(tfLib, TF_OperationToNodeDef);
		PRun = GET_ADDRESS(tfLib, TF_PRun);
		PRunSetup = GET_ADDRESS(tfLib, TF_PRunSetup);
		Reset = GET_ADDRESS(tfLib, TF_Reset);
		Run = GET_ADDRESS(tfLib, TF_Run);
		SessionListDevices = GET_ADDRESS(tfLib, TF_SessionListDevices);
		SessionPRun = GET_ADDRESS(tfLib, TF_SessionPRun);
		SessionPRunSetup = GET_ADDRESS(tfLib, TF_SessionPRunSetup);
		SessionRun = GET_ADDRESS(tfLib, TF_SessionRun);
		SetAttrBool = GET_ADDRESS(tfLib, TF_SetAttrBool);
		SetAttrBoolList = GET_ADDRESS(tfLib, TF_SetAttrBoolList);
		SetAttrFloat = GET_ADDRESS(tfLib, TF_SetAttrFloat);
		SetAttrFloatList = GET_ADDRESS(tfLib, TF_SetAttrFloatList);
		SetAttrInt = GET_ADDRESS(tfLib, TF_SetAttrInt);
		SetAttrIntList = GET_ADDRESS(tfLib, TF_SetAttrIntList);
		SetAttrShape = GET_ADDRESS(tfLib, TF_SetAttrShape);
		SetAttrShapeList = GET_ADDRESS(tfLib, TF_SetAttrShapeList);
		SetAttrString = GET_ADDRESS(tfLib, TF_SetAttrString);
		SetAttrStringList = GET_ADDRESS(tfLib, TF_SetAttrStringList);
		SetAttrTensor = GET_ADDRESS(tfLib, TF_SetAttrTensor);
		SetAttrTensorList = GET_ADDRESS(tfLib, TF_SetAttrTensorList);
		SetAttrTensorShapeProto = GET_ADDRESS(tfLib, TF_SetAttrTensorShapeProto);
		SetAttrTensorShapeProtoList = GET_ADDRESS(tfLib, TF_SetAttrTensorShapeProtoList);
		SetAttrType = GET_ADDRESS(tfLib, TF_SetAttrType);
		SetAttrTypeList = GET_ADDRESS(tfLib, TF_SetAttrTypeList);
		SetAttrValueProto = GET_ADDRESS(tfLib, TF_SetAttrValueProto);
		SetConfig = GET_ADDRESS(tfLib, TF_SetConfig);
		SetDevice = GET_ADDRESS(tfLib, TF_SetDevice);
		SetStatus = GET_ADDRESS(tfLib, TF_SetStatus);
		SetTarget = GET_ADDRESS(tfLib, TF_SetTarget);
		StringDecode = GET_ADDRESS(tfLib, TF_StringDecode);
		StringEncode = GET_ADDRESS(tfLib, TF_StringEncode);
		StringEncodedSize = GET_ADDRESS(tfLib, TF_StringEncodedSize);
		TensorByteSize = GET_ADDRESS(tfLib, TF_TensorByteSize);
		TensorData = GET_ADDRESS(tfLib, TF_TensorData);
		TensorMaybeMove = GET_ADDRESS(tfLib, TF_TensorMaybeMove);
		TensorType = GET_ADDRESS(tfLib, TF_TensorType);
		Version = GET_ADDRESS(tfLib, TF_Version);
	}
}