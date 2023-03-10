#include "monty.h"

/**
 * _freeAppData - free all
 * @void: void
 * Return: void
 */

void _freeAppData(void)
{
	if (appData != NULL && appData->arguments != NULL)
		_freeCharDoublePointer(appData->arguments);
	appData->arguments = NULL;
	if (appData != NULL && appData->buffer != NULL)
		free(appData->buffer);
	appData->buffer = NULL;
	if (appData != NULL && appData->queue != NULL)
		_freeStackList(appData->queue);
	appData->queue = NULL;
	if (appData != NULL && appData->fileDescriptor != NULL)
		fclose(appData->fileDescriptor);
	free(appData);
	appData = NULL;
}
